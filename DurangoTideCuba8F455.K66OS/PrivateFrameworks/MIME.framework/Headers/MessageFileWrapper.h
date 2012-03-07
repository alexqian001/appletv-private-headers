/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSData, NSMutableDictionary, NSString;

@interface MessageFileWrapper : NSObject {
	NSString *_path;	// 4 = 0x4
	NSString *_filename;	// 8 = 0x8
	NSString *_preferredFilename;	// 12 = 0xc
	NSData *_data;	// 16 = 0x10
	NSMutableDictionary *_attributes;	// 20 = 0x14
	NSString *_linkDestination;	// 24 = 0x18
	NSString *_url;	// 28 = 0x1c
	int _type;	// 32 = 0x20
}
@property(retain) id URL;	// G=0x314fbab9; S=0x314fc7d5; converted property
@property(retain) id contentID;	// G=0x314fbdf1; S=0x314fbf8d; converted property
@property(assign) unsigned long creator;	// G=0x314fbe81; S=0x314fbfb5; converted property
@property(retain) id eventUniqueID;	// G=0x314fbd99; S=0x314fbf65; converted property
@property(retain) id fileAttributes;	// G=0x314fbb41; S=0x314fbb55; converted property
@property(retain) NSString *filename;	// G=0x314fbad9; S=0x314fbb8d; converted property
@property(assign) unsigned short finderFlags;	// G=0x314fbe49; S=0x314fc8d9; converted property
@property(retain) id meetingStorePersistentID;	// G=0x314fbd6d; S=0x314fbf51; converted property
@property(retain) id messageID;	// G=0x314fbdc5; S=0x314fbf79; converted property
@property(retain) id mimeType;	// G=0x314fbe1d; S=0x314fbfa1; converted property
@property(retain) NSString *path;	// G=0x314fbcb1; S=0x314fbc5d; converted property
@property(retain) NSString *preferredFilename;	// G=0x314fbac9; S=0x314fbbe9; converted property
@property(assign) unsigned long type;	// G=0x314fbea5; S=0x314fbfed; converted property
+ (id)_supportedImageFileExtensions;	// 0x314fc819
- (id)initRegularFileWithContents:(id)contents;	// 0x314fc439
- (id)initSymbolicLinkWithDestination:(id)destination;	// 0x314fc3dd
- (id)initWithPath:(id)path;	// 0x314fc611
// converted property getter: - (id)URL;	// 0x314fbab9
- (void)_isImage:(BOOL *)image orPDFFile:(BOOL *)file;	// 0x314fc07d
// converted property getter: - (id)contentID;	// 0x314fbdf1
// converted property getter: - (unsigned long)creator;	// 0x314fbe81
- (void)dealloc;	// 0x314fc319
- (id)description;	// 0x314fc22d
// converted property getter: - (id)eventUniqueID;	// 0x314fbd99
// converted property getter: - (id)fileAttributes;	// 0x314fbb41
- (id)fileWrappers;	// 0x314fbb1d
// converted property getter: - (id)filename;	// 0x314fbad9
// converted property getter: - (unsigned short)finderFlags;	// 0x314fbe49
- (unsigned)imageBytes;	// 0x314fbce1
- (id)inferredMimeType;	// 0x314fc065
- (BOOL)isDirectory;	// 0x314fbb19
- (BOOL)isImageFile;	// 0x314fbd45
- (BOOL)isPDFFile;	// 0x314fbd1d
- (BOOL)isPlaceholder;	// 0x314fbab5
- (BOOL)isRegularFile;	// 0x314fbb01
- (BOOL)isSymbolicLink;	// 0x314fbae9
// converted property getter: - (id)meetingStorePersistentID;	// 0x314fbd6d
// converted property getter: - (id)messageID;	// 0x314fbdc5
// converted property getter: - (id)mimeType;	// 0x314fbe1d
// converted property getter: - (id)path;	// 0x314fbcb1
// converted property getter: - (id)preferredFilename;	// 0x314fbac9
- (id)regularFileContents;	// 0x314fbb31
// converted property setter: - (void)setContentID:(id)anId;	// 0x314fbf8d
// converted property setter: - (void)setCreator:(unsigned long)creator;	// 0x314fbfb5
// converted property setter: - (void)setEventUniqueID:(id)anId;	// 0x314fbf65
// converted property setter: - (void)setFileAttributes:(id)attributes;	// 0x314fbb55
// converted property setter: - (void)setFilename:(id)filename;	// 0x314fbb8d
// converted property setter: - (void)setFinderFlags:(unsigned short)flags;	// 0x314fc8d9
// converted property setter: - (void)setMeetingStorePersistentID:(id)anId;	// 0x314fbf51
// converted property setter: - (void)setMessageID:(id)anId;	// 0x314fbf79
// converted property setter: - (void)setMimeType:(id)type;	// 0x314fbfa1
// converted property setter: - (void)setPath:(id)path;	// 0x314fbc5d
// converted property setter: - (void)setPreferredFilename:(id)filename;	// 0x314fbbe9
// converted property setter: - (void)setType:(unsigned long)type;	// 0x314fbfed
// converted property setter: - (void)setURL:(id)url;	// 0x314fc7d5
- (id)symbolicLinkDestination;	// 0x314fbb21
// converted property getter: - (unsigned long)type;	// 0x314fbea5
@end
