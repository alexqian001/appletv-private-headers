/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMStreetViewViewpoint : PBCodable {
	BOOL _hasScene;	// 4 = 0x4
	int _scene;	// 8 = 0x8
	BOOL _hasPanningCount;	// 12 = 0xc
	int _panningCount;	// 16 = 0x10
	BOOL _hasZoomingCount;	// 20 = 0x14
	int _zoomingCount;	// 24 = 0x18
	BOOL _hasNavigationCount;	// 28 = 0x1c
	int _navigationCount;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL hasNavigationCount;	// G=0x30b8312d; S=0x30b8313d; @synthesize=_hasNavigationCount
@property(assign, nonatomic) BOOL hasPanningCount;	// G=0x30b830ed; S=0x30b830fd; @synthesize=_hasPanningCount
@property(assign, nonatomic) BOOL hasScene;	// G=0x30b830cd; S=0x30b830dd; @synthesize=_hasScene
@property(assign, nonatomic) BOOL hasZoomingCount;	// G=0x30b8310d; S=0x30b8311d; @synthesize=_hasZoomingCount
@property(assign, nonatomic) int navigationCount;	// G=0x30b82c8d; S=0x30b82cb1; @synthesize=_navigationCount
@property(assign, nonatomic) int panningCount;	// G=0x30b82bfd; S=0x30b82c21; @synthesize=_panningCount
@property(assign, nonatomic) int scene;	// G=0x30b82bb5; S=0x30b82bd9; @synthesize=_scene
@property(assign, nonatomic) int zoomingCount;	// G=0x30b82c45; S=0x30b82c69; @synthesize=_zoomingCount
- (void)dealloc;	// 0x30b82b89
- (id)description;	// 0x30b82cd5
- (id)dictionaryRepresentation;	// 0x30b82d45
// declared property getter: - (BOOL)hasNavigationCount;	// 0x30b8312d
// declared property getter: - (BOOL)hasPanningCount;	// 0x30b830ed
// declared property getter: - (BOOL)hasScene;	// 0x30b830cd
// declared property getter: - (BOOL)hasZoomingCount;	// 0x30b8310d
// declared property getter: - (int)navigationCount;	// 0x30b82c8d
// declared property getter: - (int)panningCount;	// 0x30b82bfd
- (BOOL)readFrom:(id)from;	// 0x30b82ecd
// declared property getter: - (int)scene;	// 0x30b82bb5
// declared property setter: - (void)setHasNavigationCount:(BOOL)count;	// 0x30b8313d
// declared property setter: - (void)setHasPanningCount:(BOOL)count;	// 0x30b830fd
// declared property setter: - (void)setHasScene:(BOOL)scene;	// 0x30b830dd
// declared property setter: - (void)setHasZoomingCount:(BOOL)count;	// 0x30b8311d
// declared property setter: - (void)setNavigationCount:(int)count;	// 0x30b82cb1
// declared property setter: - (void)setPanningCount:(int)count;	// 0x30b82c21
// declared property setter: - (void)setScene:(int)scene;	// 0x30b82bd9
// declared property setter: - (void)setZoomingCount:(int)count;	// 0x30b82c69
- (void)writeTo:(id)to;	// 0x30b82ff5
// declared property getter: - (int)zoomingCount;	// 0x30b82c45
@end
