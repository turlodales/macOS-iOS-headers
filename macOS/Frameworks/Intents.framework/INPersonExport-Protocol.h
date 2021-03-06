//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@protocol INPersonExport <NSObject, JSExport>
@property(copy) NSArray *alternatives;
@property BOOL isMe;
@property long long suggestionType;
@property(copy) NSArray *aliases;
@property(copy) NSString *customIdentifier;
@property(copy) NSString *relationship;
@property(copy) NSString *contactIdentifier;
@property(copy) INImage *image;
@property(copy) NSString *displayName;
@property(copy) NSPersonNameComponents *nameComponents;
@property(copy) INPersonHandle *personHandle;
@property(copy) NSString *handle;
- (id)init;
@end

