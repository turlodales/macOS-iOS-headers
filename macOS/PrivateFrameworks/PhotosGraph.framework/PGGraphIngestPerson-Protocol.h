//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol PGGraphIngestPerson <NSObject>
@property(readonly, nonatomic) NSDictionary *locationsByAddressTypes;
@property(readonly, nonatomic) unsigned long long gender;
@property(readonly, nonatomic) unsigned long long ageCategory;
@property(readonly, nonatomic) unsigned long long relationship;
@property(readonly, nonatomic) NSDate *anniversaryDate;
@property(readonly, nonatomic) NSDate *potentialBirthdayDate;
@property(readonly, nonatomic) NSDate *birthdayDate;
@property(readonly, nonatomic) BOOL isMe;
@property(readonly, nonatomic) BOOL isUserCreated;
@property(readonly, nonatomic) BOOL isFavorite;
@property(readonly, nonatomic) NSString *contactID;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *fullName;
@end

