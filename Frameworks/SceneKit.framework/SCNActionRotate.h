/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNActionRotate : SCNAction  {

  /* Error parsing encoded ivar type info: ^{SCNCActionRotate=^^?f@BdddddBB@?^{__CFString}qddddf{__C3DQuaternion=ffff}{__C3DQuaternion=ffff}BBBB} */
    struct SCNCActionRotate { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; double x7; double x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; struct __CFString {} *x14; long long x15; double x16; double x17; double x18; double x19; float x20; struct __C3DQuaternion { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; } x21; struct __C3DQuaternion { float x_22_1_1; float x_22_1_2; float x_22_1_3; float x_22_1_4; } x22; boolx23; boolx24; boolx25; boolx26; } *_mycaction;

}

+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(bool)arg5;
+ (id)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 duration:(double)arg3;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end