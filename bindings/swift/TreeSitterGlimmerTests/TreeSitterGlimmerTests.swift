import XCTest
import SwiftTreeSitter
import TreeSitterGlimmer

final class TreeSitterGlimmerTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_glimmer())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Glimmer grammar")
    }
}
