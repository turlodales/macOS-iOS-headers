//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHPersonChangeRequest.h>

@class PHObjectPlaceholder, RDPerson;

@interface PHPersonCreationRequest : PHPersonChangeRequest
{
    PHObjectPlaceholder *_placeHolder;
    RDPerson *_rdperson;
}

- (void).cxx_destruct;
- (id)placeholderForCreatedPerson;
- (id)mutableModel;
- (id)model;
- (id)localIdentifier;
- (id)initWithPhotoLibrary:(id)arg1;

@end

