#!/bin/bash

# Pull the latest version
git pull origin main

# Update dependencies
npm install

# Run any other necessary commands
npm run build

# Optionally, commit and push the changes
git add .
git commit -m "Updated to new version"
git push origin main
