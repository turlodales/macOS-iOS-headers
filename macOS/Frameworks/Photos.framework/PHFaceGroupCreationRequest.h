//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHFaceGroupChangeRequest.h>

@class PHObjectPlaceholder, RDFaceGroup, RDPerson;

@interface PHFaceGroupCreationRequest : PHFaceGroupChangeRequest
{
    PHObjectPlaceholder *_placeHolder;
    RDFaceGroup *_rdgroup;
    RDPerson *_rdassociatedPerson;
}

- (void).cxx_destruct;
- (id)placeholderForCreatedFaceGroup;
- (id)mutableAssociatedPerson;
- (id)associatedPerson;
- (id)mutableModel;
- (id)model;
- (id)localIdentifier;
- (id)initWithFaceGroupType:(long long)arg1 photoLibrary:(id)arg2;

@end

