/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
	NSMutableAttributedString *mutableAttributedString;	// 4 = 0x4
}
- (id)initWithMutableAttributedString:(id)mutableAttributedString;	// 0x325ef559
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x325ef65d
- (void)dealloc;	// 0x325ef5ad
- (void)finalize;	// 0x325ef5f9
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x325ef695
- (unsigned)length;	// 0x325ef625
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x325ef6d9
@end
