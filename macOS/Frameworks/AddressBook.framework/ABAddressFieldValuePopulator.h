//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNPostalAddress;

@interface ABAddressFieldValuePopulator : NSObject
{
    CNPostalAddress *_postalAddress;
}

- (void).cxx_destruct;
@property(readonly) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void)populateAddressFields:(id)arg1;
- (id)valueForComponentKeypath:(id)arg1;
- (id)cardViewTagToValueKeypathMap;
- (id)initWithPostalAddress:(id)arg1;

@end

