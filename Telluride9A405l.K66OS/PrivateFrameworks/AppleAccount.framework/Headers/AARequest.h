/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURLRequest;

@interface AARequest : NSObject {
	NSString *_urlString;	// 4 = 0x4
	BOOL _flushCache;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL flushCache;	// G=0x36f76afd; S=0x36f76b0d; @synthesize=_flushCache
@property(readonly, assign) NSURLRequest *urlRequest;	// G=0x36f766d9; 
@property(readonly, retain) NSString *urlString;	// G=0x36f766d5; converted property
+ (id)protocolVersion;	// 0x36f76675
+ (Class)responseClass;	// 0x36f76659
- (id)initWithURLString:(id)urlstring;	// 0x36f76681
- (id)bodyDictionary;	// 0x36f76821
- (void)dealloc;	// 0x36f76ab1
// declared property getter: - (BOOL)flushCache;	// 0x36f76afd
- (void)performRequestWithHandler:(id)handler;	// 0x36f7694d
// declared property setter: - (void)setFlushCache:(BOOL)cache;	// 0x36f76b0d
- (id)urlCredential;	// 0x36f7681d
// declared property getter: - (id)urlRequest;	// 0x36f766d9
// converted property getter: - (id)urlString;	// 0x36f766d5
@end

