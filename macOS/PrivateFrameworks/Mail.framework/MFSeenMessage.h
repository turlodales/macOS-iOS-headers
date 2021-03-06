//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface MFSeenMessage : NSManagedObject
{
}

+ (BOOL)automaticallyNotifiesObserversOfIsOnServer;
+ (BOOL)automaticallyNotifiesObserversOfShouldDeleteFromServer;
+ (BOOL)automaticallyNotifiesObserversOfMessageID;
+ (BOOL)automaticallyNotifiesObserversOfDateSeen;
+ (BOOL)automaticallyNotifiesObserversOfAccount;
@property(nonatomic) BOOL isOnServer;
@property(nonatomic) BOOL shouldDeleteFromServer;
@property(copy, nonatomic) NSString *messageID;
@property(retain, nonatomic) NSDate *dateSeen;
- (void)setAccount:(id)arg1;

@end

