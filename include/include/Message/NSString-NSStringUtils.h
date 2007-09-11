/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (NSStringUtils)
+ (id)UUID;	// IMP=0x30b9d7b5
+ (id)messageIDStringWithDomainHint:(id)fp8;	// IMP=0x30b9d7e5
+ (id)stringRepresentationForBytes:(long long)fp8;	// IMP=0x30b9dcf9
+ (id)stringWithAttachmentCharacter;	// IMP=0x30b9dd0b
+ (id)stringWithData:(id)fp8 encoding:(unsigned int)fp12;	// IMP=0x30b9d971
- (id)MD5Digest;	// IMP=0x30b9dd59
- (BOOL)boolValue;	// IMP=0x30b9d891
- (int)caseInsensitiveCompareExcludingXDash:(id)fp8;	// IMP=0x30b9e5dd
- (id)componentsSeparatedByPattern:(id)fp8;	// IMP=0x30b9e205
- (id)encodedMessageID;	// IMP=0x30b9e3c1
- (id)encodedMessageIDString;	// IMP=0x30b9ddad
- (id)fileSystemString;	// IMP=0x30b9dc69
- (id)messageIDSubstring;	// IMP=0x30b9e409
- (id)stringByEscapingForXML;	// IMP=0x30b9e09d
- (id)stringByEscapingHTMLCodes;	// IMP=0x30b9df2d
- (id)stringByLocalizingReOrFwdPrefix;	// IMP=0x30b9d9b1
- (id)stringByReplacingString:(id)fp8 withString:(id)fp12;	// IMP=0x30b9d89d
- (id)stringWithNoExtraSpaces;	// IMP=0x30b9e4a9
- (unsigned int)subjectPrefixLength;	// IMP=0x30b9db5d
- (id)uniqueFilenameWithRespectToFilenames:(id)fp8;	// IMP=0x30b9de11
@end

