//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import "NSSecureCoding.h"

@interface CKFetchServerEnvironmentOperationResult : CKOperationResult <NSSecureCoding>
{
    long long _environment;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

