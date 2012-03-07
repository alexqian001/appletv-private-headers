/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTextBodyProperties, OADTextListStyle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject {
@private
	OADTextBodyProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mParagraphs;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x32b7ead1; S=0x32c17425; converted property
- (id)init;	// 0x32b85379
- (id)addParagraph;	// 0x32b8aba9
- (void)addParagraphsFromTextBody:(id)textBody;	// 0x32cece29
- (void)applyTextListStyle:(id)style;	// 0x32cdae71
- (void)dealloc;	// 0x32b13931
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x32b90775
- (void)flattenProperties;	// 0x32cdad51
- (BOOL)isEmpty;	// 0x32b1a3f5
- (id)overrideTextListStyle;	// 0x32bf6025
- (id)paragraphAtIndex:(unsigned)index;	// 0x32b7ebe9
- (unsigned)paragraphCount;	// 0x32b7ebc9
- (id)plainText;	// 0x32c8f329
// converted property getter: - (id)properties;	// 0x32b7ead1
- (void)removeAllParagraphs;	// 0x32cdaef5
- (void)removeTrailingNewlines;	// 0x32cdaded
- (void)removeUnnecessaryOverrides;	// 0x32b914e1
- (void)setParentTextListStyle:(id)style;	// 0x32b90ffd
// converted property setter: - (void)setProperties:(id)properties;	// 0x32c17425
- (id)textListStyle;	// 0x32b90fcd
@end
