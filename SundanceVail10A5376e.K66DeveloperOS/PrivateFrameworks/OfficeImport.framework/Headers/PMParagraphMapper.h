/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADParagraph;

@interface PMParagraphMapper : CMMapper {
	OADParagraph *mParagraph;	// 8 = 0x8
}
- (id)initWithOadParagraph:(id)oadParagraph parent:(id)parent;	// 0x36f77b15
- (void)addEndCharacterStyleToStyle:(id)style;	// 0x36f77d99
- (id)copyParagraphStyleWithState:(id)state isFirstParagraph:(BOOL)paragraph;	// 0x370e3c2d
- (int)firstTextRunFontSize;	// 0x36f78491
- (id)fontScheme;	// 0x36f77f55
- (void)mapAt:(id)at withState:(id)state isFirstParagraph:(BOOL)paragraph;	// 0x370e3959
@end

