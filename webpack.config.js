const path = require('path')

module.exports = {
  entry: {
    main: './lib/js/src/index.js'
  },
  output: {
    path: path.resolve(__dirname, 'bundledOutputs'),
    filename: '[name].js'
  }
}
