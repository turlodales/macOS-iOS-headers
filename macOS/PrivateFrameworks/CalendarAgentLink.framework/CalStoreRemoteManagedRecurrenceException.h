//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class CalStoreRemoteManagedEvent, NSDate;

@interface CalStoreRemoteManagedRecurrenceException : CalStoreRemoteManagedObject
{
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) CalStoreRemoteManagedEvent *masterEvent;
- (id)initWithCoder:(id)arg1;

@end

