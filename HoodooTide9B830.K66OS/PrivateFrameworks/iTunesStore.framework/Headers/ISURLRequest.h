/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSData, NSInputStream, NSURL, SSMutableURLRequestProperties, NSString, NSLock, NSArray;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
	NSLock *_lock;	// 4 = 0x4
	SSMutableURLRequestProperties *_properties;	// 8 = 0x8
}
@property(retain) NSData *HTTPBody;	// G=0x35550e45; S=0x35550f85; 
@property(retain) NSInputStream *HTTPBodyStream;	// G=0x35550e65; S=0x35550fa5; 
@property(retain) NSString *HTTPMethod;	// G=0x35550e85; S=0x35550fc5; 
@property(assign) int URLBagType;	// G=0x355510c5; S=0x35551025; 
@property(retain) NSArray *URLs;	// G=0x355510e5; S=0x35551045; 
@property(assign) int allowedRetryCount;	// G=0x35550da5; S=0x35550ee5; 
@property(retain) NSString *appleClientApplication;	// G=0x35550dc5; S=0x35550f05; 
@property(assign) unsigned cachePolicy;	// G=0x35550de5; S=0x35550f25; 
@property(retain) NSDictionary *customHeaders;	// G=0x35550e05; S=0x35550f45; 
@property(assign) long long expectedContentLength;	// G=0x35550e25; S=0x35550f65; 
@property(readonly, assign) NSURL *primaryURL;	// G=0x35550ec5; 
@property(retain) NSDictionary *queryStringDictionary;	// G=0x35550ea5; S=0x35550fe5; 
@property(assign) double timeoutInterval;	// G=0x355510a5; S=0x35551005; 
+ (id)requestWithURL:(id)url;	// 0x35550d69
- (id)init;	// 0x3555073d
- (id)initWithCoder:(id)coder;	// 0x35550949
- (id)initWithRequestProperties:(id)requestProperties;	// 0x35550751
- (id)initWithURL:(id)url;	// 0x35550815
- (id)initWithURLRequest:(id)urlrequest;	// 0x355507a5
// declared property getter: - (id)HTTPBody;	// 0x35550e45
// declared property getter: - (id)HTTPBodyStream;	// 0x35550e65
// declared property getter: - (id)HTTPMethod;	// 0x35550e85
// declared property getter: - (int)URLBagType;	// 0x355510c5
// declared property getter: - (id)URLs;	// 0x355510e5
- (id)_initCommon;	// 0x355506b5
// declared property getter: - (int)allowedRetryCount;	// 0x35550da5
// declared property getter: - (id)appleClientApplication;	// 0x35550dc5
// declared property getter: - (unsigned)cachePolicy;	// 0x35550de5
- (id)copyWithZone:(NSZone *)zone;	// 0x35550c51
// declared property getter: - (id)customHeaders;	// 0x35550e05
- (void)dealloc;	// 0x35550855
- (void)encodeWithCoder:(id)coder;	// 0x355508b5
// declared property getter: - (long long)expectedContentLength;	// 0x35550e25
- (BOOL)isEqual:(id)equal;	// 0x35550ce9
// declared property getter: - (id)primaryURL;	// 0x35550ec5
// declared property getter: - (id)queryStringDictionary;	// 0x35550ea5
- (id)requestProperties;	// 0x35551105
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x35550ee5
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x35550f05
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x35550f25
// declared property setter: - (void)setCustomHeaders:(id)headers;	// 0x35550f45
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x35550f65
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x35550f85
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x35550fa5
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x35550fc5
// declared property setter: - (void)setQueryStringDictionary:(id)dictionary;	// 0x35550fe5
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x35551005
// declared property setter: - (void)setURLBagType:(int)type;	// 0x35551025
// declared property setter: - (void)setURLs:(id)urls;	// 0x35551045
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x35551065
- (void)setValue:(id)value forQueryStringParameter:(id)queryStringParameter;	// 0x35551085
// declared property getter: - (double)timeoutInterval;	// 0x355510a5
@end

