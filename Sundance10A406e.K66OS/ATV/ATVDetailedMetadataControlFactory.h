/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVDetailedMetadataControlFactory : XXUnknownSuperclass <BRControlFactory> {
}
+ (id)factory;	// 0x10d14d
- (void)_populateActors:(id)actors forControl:(id)control;	// 0x10d9f9
- (void)_populateDirectors:(id)directors forControl:(id)control;	// 0x10da71
- (void)_populateMovieDetails:(id)details forControl:(id)control isTrailer:(BOOL)trailer;	// 0x10d579
- (void)_populateProducers:(id)producers forControl:(id)control;	// 0x10db01
- (id)_setupBaseDetailedMetadataControl:(id)control;	// 0x10d2f1
- (id)_setupMusicDetailedMetadataControl:(id)control;	// 0x10d3f9
- (void)_setupSpecificDetailedMetadataControl:(id)control forControl:(id)control2;	// 0x10d449
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x10d185
@end
