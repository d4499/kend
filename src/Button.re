module Button = [%styled.Button {|
    background-color: #ffffff;
    padding: 16px
|}]


[@react.component]
    let make = (~label: string) => {
        <Button>{React.string(label)}</Button>
    }
