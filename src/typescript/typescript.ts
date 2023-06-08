// import './scss';
namespace typescript
{

    export class test
    {

        // Import the SCSS file

        // Define the function to render the HTML page
        public static render_page(): HTMLDivElement
        {
            // Create a new HTML element
            const element = document.createElement('div');

            // Set the element's properties
            element.innerHTML = 'Hello, world!';

            // Return the element
            return element;
        }
    }
}
/*

namespace myNamespace
{

    export class MyComponent
    {

        constructor()
        {
            // Do something when the component is created
        }

        render()
        {
            // Return the HTML for the component
        }

    }
}*/
