/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {
@private
	NSURLFileTypeMappingsInternal *_internal;	// 4 = 0x4
}
+ (id)sharedMappings;	// 0x3244d04d
- (id)MIMETypeForExtension:(id)extension;	// 0x3244d30d
- (id)_UTIMIMETypeForExtension:(id)extension;	// 0x3244d365
- (id)_UTIextensionForMIMEType:(id)mimetype;	// 0x324b1f1d
- (id)_init;	// 0x3244d0a9
- (id)extensionsForMIMEType:(id)mimetype;	// 0x324b1e3d
- (id)preferredExtensionForMIMEType:(id)mimetype;	// 0x324b1eb5
@end

