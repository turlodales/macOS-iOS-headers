//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject
{
    BOOL _retrieveCertificates;
    BOOL _retrieveAvailablilty;
    NSArray *_emailAddresses;
    NSDate *_startTime;
    NSDate *_endTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) BOOL retrieveAvailablilty; // @synthesize retrieveAvailablilty=_retrieveAvailablilty;
@property(nonatomic) BOOL retrieveCertificates; // @synthesize retrieveCertificates=_retrieveCertificates;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(BOOL)arg2 retrieveAvailability:(BOOL)arg3 withStartTime:(id)arg4 endTime:(id)arg5;
- (id)initWithEmailAddresses:(id)arg1;

@end

