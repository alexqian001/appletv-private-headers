/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSData, NSArray, NSInputStream, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <SSCoding, NSCoding, NSCopying, NSMutableCopying> {
@private
	int _allowedRetryCount;	// 4 = 0x4
	unsigned _cachePolicy;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	long long _expectedContentLength;	// 20 = 0x14
	NSData *_httpBody;	// 28 = 0x1c
	NSInputStream *_httpBodyStream;	// 32 = 0x20
	NSDictionary *_httpHeaders;	// 36 = 0x24
	NSString *_httpMethod;	// 40 = 0x28
	BOOL _isITunesStoreRequest;	// 44 = 0x2c
	NSDictionary *_requestParameters;	// 48 = 0x30
	BOOL _shouldProcessProtocol;	// 52 = 0x34
	double _timeoutInterval;	// 56 = 0x38
	NSString *_urlBagKey;	// 64 = 0x40
	int _urlBagType;	// 68 = 0x44
	id _urlBagURLBlock;	// 72 = 0x48
	NSArray *_urls;	// 76 = 0x4c
	NSArray *_userAgentComponents;	// 80 = 0x50
}
@property(readonly, assign) NSData *HTTPBody;	// G=0x324ec8ed; 
@property(readonly, assign) NSInputStream *HTTPBodyStream;	// G=0x324edd3d; 
@property(readonly, assign) NSDictionary *HTTPHeaders;	// G=0x324eca89; 
@property(readonly, assign) NSString *HTTPMethod;	// G=0x324ecc25; 
@property(readonly, assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x324ecdc1; 
@property(readonly, assign) NSURL *URL;	// G=0x324ed3b5; 
@property(readonly, assign) NSString *URLBagKey;	// G=0x324ed219; 
@property(readonly, assign) int URLBagType;	// G=0x324eded9; 
@property(readonly, assign) id URLBagURLBlock;	// G=0x324edfa9; 
@property(readonly, assign) NSArray *URLs;	// G=0x324ee159; 
@property(readonly, assign) int allowedRetryCount;	// G=0x324ec4c5; 
@property(readonly, assign) unsigned cachePolicy;	// G=0x324ec595; 
@property(readonly, assign) BOOL canBeResolved;	// G=0x324ed9e9; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x324ec665; 
@property(readonly, assign) long long expectedContentLength;	// G=0x324ec801; 
@property(readonly, assign) NSDictionary *requestParameters;	// G=0x324eceb1; 
@property(readonly, assign) BOOL shouldProcessProtocol;	// G=0x324ed04d; 
@property(readonly, assign) double timeoutInterval;	// G=0x324ed121; 
@property(readonly, assign) NSArray *userAgentComponents;	// G=0x324ed585; 
- (id)init;	// 0x324eadd1
- (id)initWithCoder:(id)coder;	// 0x324eb4a5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324ec1c5
- (id)initWithURL:(id)url;	// 0x324eade5
- (id)initWithURLRequest:(id)urlrequest;	// 0x324eae45
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324ec489
// declared property getter: - (id)HTTPBody;	// 0x324ec8ed
// declared property getter: - (id)HTTPBodyStream;	// 0x324edd3d
// declared property getter: - (id)HTTPHeaders;	// 0x324eca89
// declared property getter: - (id)HTTPMethod;	// 0x324ecc25
// declared property getter: - (id)URL;	// 0x324ed3b5
// declared property getter: - (id)URLBagKey;	// 0x324ed219
// declared property getter: - (int)URLBagType;	// 0x324eded9
// declared property getter: - (id)URLBagURLBlock;	// 0x324edfa9
// declared property getter: - (id)URLs;	// 0x324ee159
- (id)_initCommon;	// 0x324ead81
// declared property getter: - (int)allowedRetryCount;	// 0x324ec4c5
// declared property getter: - (unsigned)cachePolicy;	// 0x324ec595
// declared property getter: - (BOOL)canBeResolved;	// 0x324ed9e9
// declared property getter: - (id)clientIdentifier;	// 0x324ec665
- (id)copyPropertyListEncoding;	// 0x324ebe51
- (id)copyURLRequest;	// 0x324edb01
- (id)copyWithZone:(NSZone *)zone;	// 0x324ebaed
- (void *)copyXPCEncoding;	// 0x324ec191
- (void)dealloc;	// 0x324eb025
- (id)description;	// 0x324ed721
- (void)encodeWithCoder:(id)coder;	// 0x324eb125
// declared property getter: - (long long)expectedContentLength;	// 0x324ec801
- (BOOL)isEqual:(id)equal;	// 0x324ed7c5
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x324ecdc1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x324ebafd
// declared property getter: - (id)requestParameters;	// 0x324eceb1
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x324ed04d
// declared property getter: - (double)timeoutInterval;	// 0x324ed121
// declared property getter: - (id)userAgentComponents;	// 0x324ed585
@end

