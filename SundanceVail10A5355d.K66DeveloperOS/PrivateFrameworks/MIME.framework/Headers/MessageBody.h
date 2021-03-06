/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class Message;

@interface MessageBody : NSObject {
	Message *_message;	// 4 = 0x4
}
@property(retain) Message *message;	// G=0x373cbc8d; S=0x373cbc41; converted property
- (id)attachments;	// 0x373cbca1
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x373cbbd5
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x373cbc1d
- (void)dealloc;	// 0x373cbd71
- (id)htmlContent;	// 0x373cbc21
- (id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x373cbbf9
- (BOOL)isHTML;	// 0x373cbc39
- (BOOL)isRich;	// 0x373cbc3d
// converted property getter: - (id)message;	// 0x373cbc8d
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x373cbc9d
- (id)rawData;	// 0x373cbbb5
// converted property setter: - (void)setMessage:(id)message;	// 0x373cbc41
- (id)textHtmlPart;	// 0x373cbd6d
@end

