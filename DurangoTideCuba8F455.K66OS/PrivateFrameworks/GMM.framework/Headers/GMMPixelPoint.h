/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMPixelPoint : PBCodable {
@private
	int _pixelX;	// 4 = 0x4
	int _pixelY;	// 8 = 0x8
	int _zoomLevel;	// 12 = 0xc
}
@property(assign, nonatomic) int pixelX;	// G=0x3443d705; S=0x3443d715; @synthesize=_pixelX
@property(assign, nonatomic) int pixelY;	// G=0x3443d6e5; S=0x3443d6f5; @synthesize=_pixelY
@property(assign, nonatomic) int zoomLevel;	// G=0x3443d6c5; S=0x3443d6d5; @synthesize=_zoomLevel
- (id)init;	// 0x3443d751
- (void)dealloc;	// 0x3443d725
- (id)description;	// 0x3443d841
- (id)dictionaryRepresentation;	// 0x3443d77d
// declared property getter: - (int)pixelX;	// 0x3443d705
// declared property getter: - (int)pixelY;	// 0x3443d6e5
- (BOOL)readFrom:(id)from;	// 0x3443d9c1
// declared property setter: - (void)setPixelX:(int)x;	// 0x3443d715
// declared property setter: - (void)setPixelY:(int)y;	// 0x3443d6f5
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x3443d6d5
- (void)writeTo:(id)to;	// 0x3443d959
// declared property getter: - (int)zoomLevel;	// 0x3443d6c5
@end

