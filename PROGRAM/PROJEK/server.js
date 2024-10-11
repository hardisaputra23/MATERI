const express = require('express');
const { exec } = require('child_process');
const path = require('path');
const app = express();
const port = 3000;

app.use(express.static(__dirname));

app.get('*.php', (req, res) => {
    const filePath = path.join(__dirname, req.url);
    exec(`php-cgi ${filePath}`, (error, stdout, stderr) => {
        if (error) {
            res.status(500).send(`Error: ${stderr}`);
            return;
        }
        res.send(stdout);
    });
});

app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}`);
});
