/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixError : XXUnknownSuperclass {
}
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x465191
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x4652d9
+ (id)errorWithDomain:(id)domain code:(int)code underlyingError:(id)error;	// 0x4652a1
+ (id)localizedDescriptionForNetflixError:(int)netflixError;	// 0x4655f9
+ (id)localizedMessageForNRDPErrorCode:(int)nrdperrorCode;	// 0x465c95
+ (id)localizedMessageForNetflixInternalErrorCode:(int)netflixInternalErrorCode;	// 0x465c25
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x465315
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x465471
+ (id)netflixErrorWithCode:(int)code underlyingError:(id)error;	// 0x465441
+ (id)netflixInternalErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x4654cd
+ (id)netflixInternalErrorWithCode:(int)code underlyingError:(id)error;	// 0x4654a1
+ (id)nrdpErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x465579
+ (id)nrdpErrorWithCode:(int)code underlyingError:(id)error;	// 0x46554d
- (id)initWithDomain:(id)domain code:(int)code localizedDescription:(id)description extraUserInfo:(id)info underlyingError:(id)error;	// 0x464eb1
@end

