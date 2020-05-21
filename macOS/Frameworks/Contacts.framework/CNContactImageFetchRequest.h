//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactImageRequest.h"

@class NSArray, NSPersistentStoreRequest, NSString;

@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest>
{
    NSArray *_contactIdentifiers;
}

+ (id)predicateForImagesMatchingContactIdentifiers:(id)arg1;
+ (id)recentImagesRequestForContactIdenfitiers:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
- (id)initWithContactIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

