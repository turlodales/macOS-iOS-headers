//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDFAccessibilityNode;

__attribute__((visibility("hidden")))
@interface PDFAccessibilityAssociationInfo : NSObject
{
    PDFAccessibilityNode *_annotationNode;
    PDFAccessibilityNode *_parentNode;
    PDFAccessibilityNode *_firstChoiceAssociationNode;
    PDFAccessibilityNode *_secondChoiceAssociationNode;
    double _bestDistance;
    double _secondBestDistance;
    unsigned long long _firstChoiceAssociationPosition;
    unsigned long long _secondChoiceAssociationPosition;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long secondChoiceAssociationPosition; // @synthesize secondChoiceAssociationPosition=_secondChoiceAssociationPosition;
@property(nonatomic) unsigned long long firstChoiceAssociationPosition; // @synthesize firstChoiceAssociationPosition=_firstChoiceAssociationPosition;
@property(nonatomic) double secondBestDistance; // @synthesize secondBestDistance=_secondBestDistance;
@property(nonatomic) double bestDistance; // @synthesize bestDistance=_bestDistance;
@property(nonatomic) __weak PDFAccessibilityNode *secondChoiceAssociationNode; // @synthesize secondChoiceAssociationNode=_secondChoiceAssociationNode;
@property(nonatomic) __weak PDFAccessibilityNode *firstChoiceAssociationNode; // @synthesize firstChoiceAssociationNode=_firstChoiceAssociationNode;
@property(nonatomic) __weak PDFAccessibilityNode *parentNode; // @synthesize parentNode=_parentNode;
@property(nonatomic) __weak PDFAccessibilityNode *annotationNode; // @synthesize annotationNode=_annotationNode;
- (id)description;
- (id)init;

@end

