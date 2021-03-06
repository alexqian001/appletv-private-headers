/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import </libobjc.A.h>
#import "MFGuaranteedCollectingDataConsumer.h"

@class NSMutableData, NSArray, NSString;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
	NSMutableData *_data;	// 4 = 0x4
	int _fd;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	NSArray *_stack;	// 16 = 0x10
}
@property(readonly, retain) NSMutableData *data;	// G=0x312cc49d; converted property
- (id)init;	// 0x312cc38d
- (int)appendData:(id)data;	// 0x312cc621
// converted property getter: - (id)data;	// 0x312cc49d
- (void)dealloc;	// 0x312cc405
- (void)done;	// 0x312cc879
@end

