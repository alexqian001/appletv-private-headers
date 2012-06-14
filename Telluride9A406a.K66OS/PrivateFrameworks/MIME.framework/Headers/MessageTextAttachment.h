/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MessageFileWrapper;

@interface MessageTextAttachment : NSObject {
@private
	NSMutableDictionary *_cache;	// 4 = 0x4
}
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;	// G=0x325ade89; S=0x325adea5; 
@property(retain) id mimePart;	// G=0x325ae2bd; S=0x325ae2d9; converted property
- (id)init;	// 0x325adced
- (id)initWithWrapper:(id)wrapper;	// 0x325ae2f5
- (unsigned)approximateSize;	// 0x325adec1
- (id)cachedValueForKey:(id)key;	// 0x325add51
- (void)dealloc;	// 0x325ae3f1
- (id)description;	// 0x325ae385
- (void)download;	// 0x325adce1
// declared property getter: - (id)fileWrapper;	// 0x325ade89
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x325ae101
- (BOOL)hasBeenDownloaded;	// 0x325ae05d
- (void)inlineDisplayData:(id *)data mimeType:(id *)type;	// 0x325ae0a9
- (BOOL)isPlaceholder;	// 0x325ae081
// converted property getter: - (id)mimePart;	// 0x325ae2bd
- (void)setCachedValue:(id)value forKey:(id)key;	// 0x325addc9
// declared property setter: - (void)setFileWrapper:(id)wrapper;	// 0x325adea5
// converted property setter: - (void)setMimePart:(id)part;	// 0x325ae2d9
- (BOOL)shouldDownloadAttachmentOnDisplay;	// 0x325adce5
- (id)textEncodingGuess;	// 0x325adce9
@end
