/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class OADFill, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMImageFillMapper : CMMapper {
@private
	OADFill *mFill;	// 8 = 0x8
	OADOrientedBounds *mBounds;	// 12 = 0xc
}
- (id)initWithOadFill:(id)oadFill bounds:(id)bounds parent:(id)parent;	// 0x3107ae7d
- (id)blipAtIndex:(unsigned)index;	// 0x3107d245
- (id)convertMetafileToPdf:(id)pdf state:(id)state;	// 0x3115a719
- (BOOL)isCropped;	// 0x3107cd89
- (id)mainSubBlip;	// 0x3107d129
- (void)mapAt:(id)at withState:(id)state;	// 0x311e11b5
- (id)mapImageFill:(id)fill withState:(id)state;	// 0x3107cfd5
- (void)mapImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x3115ef8d
- (void)mapNonImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x3107aed1
- (CGRect)uncroppedBox;	// 0x310811a9
@end

