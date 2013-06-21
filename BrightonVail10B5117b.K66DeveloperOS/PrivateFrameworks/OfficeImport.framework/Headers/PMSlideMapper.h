/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class PDSlideBase;

@interface PMSlideMapper : CMMapper {
	PDSlideBase *mSlide;	// 8 = 0x8
	CGRect mRect;	// 12 = 0xc
}
- (id)initWithPDSlide:(id)pdslide slideRect:(CGRect)rect parent:(id)parent;	// 0x34a52b45
- (id).cxx_construct;	// 0x34a52b41
- (id)defaultTheme;	// 0x34a58001
- (void)mapAt:(id)at withState:(id)state;	// 0x34a52ba5
- (void)mapBackgroundAt:(id)at recursive:(BOOL)recursive withState:(id)state;	// 0x34a531e5
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x34a56241
- (void)mapMasterGraphicsAt:(id)at withState:(id)state;	// 0x34a54885
- (void)mapMasterSlideAt:(id)at withState:(id)state;	// 0x34a53079
- (id)slideName;	// 0x34bc42fd
- (CGRect)slideRect;	// 0x34bc431d
- (id)styleMatrix;	// 0x34b40be9
@end
