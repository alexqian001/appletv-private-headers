/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADClient.h"
#import <NSObject.h> // Unknown library

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject <OADClient> {
@private
	CHDAnchor *mAnchor;	// 4 = 0x4
}
@property(retain) id anchor;	// G=0x3538be19; S=0x353217f9; converted property
// converted property getter: - (id)anchor;	// 0x3538be19
- (CGRect)bounds;	// 0x3538be2d
- (void)dealloc;	// 0x35321a7d
- (BOOL)hasBounds;	// 0x3538be29
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x353217f9
@end

