/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface UIReachabilityRequest : NSObject
{
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    NSMutableSet *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

- (void)_reachabilityChangedWithFlags:(unsigned int)fp8;	// IMP=0x324b356c
- (void)_setReachable:(BOOL)fp8;	// IMP=0x324b34b4
- (BOOL)_start;	// IMP=0x324b3604
- (void)addObserver:(id)fp8;	// IMP=0x324b3704
- (void)dealloc;	// IMP=0x324b33c0
- (id)description;	// IMP=0x324b3428
- (BOOL)hasObservers;	// IMP=0x324b37c0
- (id)initWithHostname:(id)fp8;	// IMP=0x324b332c
- (void)removeObserver:(id)fp8;	// IMP=0x324b37a0
- (void)stop;	// IMP=0x324b37e8

@end
