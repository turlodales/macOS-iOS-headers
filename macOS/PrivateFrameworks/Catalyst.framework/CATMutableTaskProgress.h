//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Catalyst/CATTaskProgress.h>

@class NSDictionary, NSError;

@interface CATMutableTaskProgress : CATTaskProgress
{
}

- (void)setProgress:(id)arg1;
@property(retain, nonatomic) id resultObject; // @dynamic resultObject;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationUUID:(id)arg1 requestClass:(Class)arg2;
- (id)initWithOperationUUID:(id)arg1;

// Remaining properties
@property(nonatomic) long long completedUnitCount; // @dynamic completedUnitCount;
@property(retain, nonatomic) NSError *error; // @dynamic error;
@property(nonatomic) BOOL isCancelable; // @dynamic isCancelable;
@property(nonatomic) BOOL isCanceled; // @dynamic isCanceled;
@property(nonatomic) unsigned long long phase; // @dynamic phase;
@property(nonatomic) long long totalUnitCount; // @dynamic totalUnitCount;
@property(retain, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

@end

