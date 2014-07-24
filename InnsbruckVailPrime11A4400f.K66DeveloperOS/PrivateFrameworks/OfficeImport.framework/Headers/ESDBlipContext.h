/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "OCDDelayedMediaContext.h"


@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {
	SsrwOOStream *mStream;	// 4 = 0x4
	unsigned mStreamID;	// 8 = 0x8
	unsigned mStartOffset;	// 12 = 0xc
	unsigned mByteCount;	// 16 = 0x10
}
- (id)initWithOffset:(unsigned)offset byteCount:(unsigned)count stream:(SsrwOOStream *)stream streamID:(unsigned)anId;	// 0x316c5241
- (id)dataRep;	// 0x318f688d
- (bool)loadDelayedNode:(id)node;	// 0x3171e3b9
- (bool)saveDelayedMedia:(id)media toFile:(id)file;	// 0x318f6879
- (SsrwOOStream *)stream;	// 0x318f687d
@end
