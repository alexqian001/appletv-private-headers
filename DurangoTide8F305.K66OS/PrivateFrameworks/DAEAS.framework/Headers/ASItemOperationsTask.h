/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {
	NSArray *_commands;	// 104 = 0x68
	int _numReplacedItems;	// 108 = 0x6c
	int _bodyTruncationBytes;	// 112 = 0x70
	int _mimeSupport;	// 116 = 0x74
	ASMailMessage *_streamingMailMessage;	// 120 = 0x78
}
@property(retain) NSArray *commands;	// G=0x302fd245; S=0x302fd485; converted property
@property(readonly, assign) int mimeSupport;	// G=0x302fd1fd; converted property
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x302fd269; S=0x302fd289; converted property
- (id)init;	// 0x302fd559
- (int)_mimeSupportCode;	// 0x302fd5fd
- (int)bodyType;	// 0x302fd21d
- (int)commandCode;	// 0x302fd1f9
// converted property getter: - (id)commands;	// 0x302fd245
- (void)dealloc;	// 0x302fd5a1
- (void)finishWithError:(id)error;	// 0x302fd955
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x302fd255
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x302fd331
// converted property getter: - (int)mimeSupport;	// 0x302fd1fd
- (BOOL)processContext:(id)context;	// 0x302fdba5
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x302fd2c5
- (id)requestBody;	// 0x302fd635
- (void)setBodyTruncationBytes:(int)bytes;	// 0x302fd235
// converted property setter: - (void)setCommands:(id)commands;	// 0x302fd485
- (void)setMIMESupport:(int)support;	// 0x302fd20d
// converted property setter: - (void)setStreamingMailMessage:(id)message;	// 0x302fd289
// converted property getter: - (id)streamingMailMessage;	// 0x302fd269
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x302fdfed
@end

