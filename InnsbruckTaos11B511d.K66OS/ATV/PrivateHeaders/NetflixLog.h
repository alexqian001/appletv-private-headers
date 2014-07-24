/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSArray;

@interface NetflixLog : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(copy) NSArray *traceAreas;	// G=0x56c841; S=0x56c8e5; 
+ (id)sharedInstance;	// 0x56c729
- (id)init;	// 0x56c815
- (void)debug:(id)debug;	// 0x56c961
- (void)error:(id)error;	// 0x56c989
- (void)fatal:(id)fatal;	// 0x56c99d
- (BOOL)handleEvent:(id)event;	// 0x56ca25
- (void)info:(id)info;	// 0x56c975
- (void)log:(unsigned)log message:(id)message;	// 0x56c935
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x56c8e5
- (void)trace:(id)trace;	// 0x56c9b1
// declared property getter: - (id)traceAreas;	// 0x56c841
@end
