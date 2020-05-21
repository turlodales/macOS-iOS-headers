//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNPostalAddress, NSURL;

@interface ABMapsLaunchRequest : NSObject
{
    BOOL _presentDirections;
    CNPostalAddress *_postalAddress;
    NSURL *_fallbackURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, nonatomic) BOOL presentDirections; // @synthesize presentDirections=_presentDirections;
@property(readonly, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (id)initWithPostalAddress:(id)arg1 presentDirections:(BOOL)arg2 fallbackURL:(id)arg3;

@end

