/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class OADOrientedBounds, OADHyperlink;

@interface OADDrawableProperties : OADProperties {
	OADOrientedBounds *mOrientedBounds;	// 12 = 0xc
	OADHyperlink *mClickHyperlink;	// 16 = 0x10
	OADHyperlink *mHoverHyperlink;	// 20 = 0x14
	unsigned mHasAspectRatioLocked : 1;	// 24 = 0x18
	unsigned mAspectRatioLocked : 1;	// 24 = 0x18
	unsigned mHasWrdInline : 1;	// 24 = 0x18
	unsigned mWrdInline : 1;	// 24 = 0x18
}
@property(assign, getter=isAspectRatioLocked) BOOL aspectRatioLocked;	// G=0x34ec5875; S=0x34e7aaf1; converted property
@property(retain) id clickHyperlink;	// G=0x34f5714d; S=0x34edd93d; converted property
@property(retain) id hoverHyperlink;	// G=0x350a32ad; S=0x350199ad; converted property
@property(retain) id orientedBounds;	// G=0x34ec0759; S=0x34e71da1; converted property
@property(assign, getter=isWrdInline) BOOL wrdInline;	// G=0x3501eb91; S=0x3501eb59; converted property
- (id)initWithDefaults;	// 0x34e71bfd
// converted property getter: - (id)clickHyperlink;	// 0x34f5714d
- (void)dealloc;	// 0x34e76751
- (BOOL)hasAspectRatioLocked;	// 0x34ec5861
- (BOOL)hasClickHyperlink;	// 0x34ec5a2d
- (BOOL)hasHoverHyperlink;	// 0x34ec5a61
- (BOOL)hasOrientedBounds;	// 0x34ec0725
- (BOOL)hasWrdInline;	// 0x34ec5a95
- (unsigned)hash;	// 0x350a32bd
// converted property getter: - (id)hoverHyperlink;	// 0x350a32ad
// converted property getter: - (BOOL)isAspectRatioLocked;	// 0x34ec5875
- (BOOL)isEqual:(id)equal;	// 0x350a3369
// converted property getter: - (BOOL)isWrdInline;	// 0x3501eb91
// converted property getter: - (id)orientedBounds;	// 0x34ec0759
- (void)removeUnnecessaryOverrides;	// 0x34ec5565
// converted property setter: - (void)setAspectRatioLocked:(BOOL)locked;	// 0x34e7aaf1
// converted property setter: - (void)setClickHyperlink:(id)hyperlink;	// 0x34edd93d
// converted property setter: - (void)setHoverHyperlink:(id)hyperlink;	// 0x350199ad
// converted property setter: - (void)setOrientedBounds:(id)bounds;	// 0x34e71da1
// converted property setter: - (void)setWrdInline:(BOOL)anInline;	// 0x3501eb59
@end

