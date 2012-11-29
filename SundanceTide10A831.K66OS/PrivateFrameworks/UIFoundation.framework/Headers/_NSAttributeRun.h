/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIFoundation-Structs.h"

@class NSTextStorage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSAttributeRun : NSObject <NSCopying> {
	NSRange _range;	// 4 = 0x4
	NSTextStorage *_textStorage;	// 12 = 0xc
	NSMutableArray *_attributesArray;	// 16 = 0x10
}
@property(readonly, assign) NSRange range;	// G=0x32c765c1; converted property
- (id)initWithTextStorage:(id)textStorage range:(NSRange)range;	// 0x32c76371
- (id)copyWithZone:(NSZone *)zone;	// 0x32c765b1
- (void)dealloc;	// 0x32c764c5
// converted property getter: - (NSRange)range;	// 0x32c765c1
- (void)restoreAttributesOfTextStorage:(id)textStorage;	// 0x32c76515
@end
