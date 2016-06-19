//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@interface SKTwoSidedNode : SKNode
{
    SKNode *_sideA;
    SKNode *_sideB;
    double _xRotation;
    double _yRotation;
}

@property(nonatomic) double yRotation; // @synthesize yRotation=_yRotation;
@property(nonatomic) double xRotation; // @synthesize xRotation=_xRotation;
@property(retain, nonatomic) SKNode *sideB; // @synthesize sideB=_sideB;
@property(retain, nonatomic) SKNode *sideA; // @synthesize sideA=_sideA;
- (void).cxx_destruct;
- (id)backSide;
- (id)frontSide;

@end

