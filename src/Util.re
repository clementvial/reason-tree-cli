[@bs.val] external __dirname: string = "";

let getAbsolutePath = (path: string) => {
  let absolutePath = Node.Path.resolve(__dirname, path);

  absolutePath;
};
