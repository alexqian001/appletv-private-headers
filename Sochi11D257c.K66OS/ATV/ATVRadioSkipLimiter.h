/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVRadioSkipLimiter : XXUnknownSuperclass {
}
- (unsigned)_numberOfSkipsAllowedForStation:(id)station;	// 0x120fb9
- (unsigned)_numberOfSkipsAvailableForStation:(id)station;	// 0x12108d
- (unsigned)_numberOfSkipsUsedForStation:(id)station;	// 0x121005
- (void)didSkipTrack:(id)track withStation:(id)station;	// 0x121231
- (unsigned)resultForAttemptToSkipTrack:(id)skipTrack withStation:(id)station skippedCount:(unsigned *)count skipLimit:(unsigned *)limit;	// 0x1210d9
@end
