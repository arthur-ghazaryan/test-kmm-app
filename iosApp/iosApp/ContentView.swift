import SwiftUI
import shared

func greet() -> String {
    return Greeting().greeting()
}

struct ContentView: View {
    
    @State private var linkList =  [Link]()
    
    var body: some View {
        NavigationView {
        VStack {
            List(linkList, id: \.id) { link in
                Text(link.description())
                }.navigationBarTitle("Saved Links").listStyle(GroupedListStyle())
            Button(action: {
                let repo = PoketRepository()
                let store = AddLinkStoreFactory(DefaultStoreFactory())
            }) {
                Text("Get link")
            }
        }
 
        }
        
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
