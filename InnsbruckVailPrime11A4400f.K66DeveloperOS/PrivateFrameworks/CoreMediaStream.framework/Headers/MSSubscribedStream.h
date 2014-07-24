/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSCoding.h"
#import </libobjc.A.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding> {
	NSString *_streamID;	// 4 = 0x4
	NSString *_ctag;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *ctag;	// G=0x304ec96d; S=0x304ec97d; @synthesize=_ctag
@property(retain, nonatomic) NSString *streamID;	// G=0x304ec935; S=0x304ec945; @synthesize=_streamID
+ (id)subscribedStreamWithStreamID:(id)streamID;	// 0x304ec6fd
- (id)initWithCoder:(id)coder;	// 0x304ec889
- (id)initWithStreamID:(id)streamID;	// 0x304ec74d
- (void).cxx_destruct;	// 0x304ec9a5
// declared property getter: - (id)ctag;	// 0x304ec96d
- (id)description;	// 0x304ec7ad
- (void)encodeWithCoder:(id)coder;	// 0x304ec819
// declared property setter: - (void)setCtag:(id)ctag;	// 0x304ec97d
// declared property setter: - (void)setStreamID:(id)anId;	// 0x304ec945
// declared property getter: - (id)streamID;	// 0x304ec935
@end
