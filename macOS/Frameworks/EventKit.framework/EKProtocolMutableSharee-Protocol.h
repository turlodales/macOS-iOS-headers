//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKProtocolMutableObject-Protocol.h>
#import <EventKit/EKProtocolSharee-Protocol.h>

@class NSManagedObjectID, NSString, NSURL;

@protocol EKProtocolMutableSharee <EKProtocolSharee, EKProtocolMutableObject>
@property(retain, nonatomic) NSManagedObjectID *managedObjectID;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *URL;
- (void)setAccessLevel:(NSString *)arg1;
- (void)setStatus:(NSString *)arg1;
@end

