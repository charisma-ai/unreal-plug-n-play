// Fill out your copyright notice in the Description page of Project Settings.

#include "Animation/OVRLipsyncHelpers.h"
#include "CharismaLogger.h"

/// <summary>
/// Retrives a subarray between Start and End index
/// Used in audio to get a particular segment relative to the timestep
/// Written in C++ due to large number of operations which cause system lag in blueprint
/// </summary>
/// <param name="Audio">Array of audio bytes, in PCM format</param>
/// <param name="StartIndex">Start index of the array to perform the copy from</param>
/// <param name="EndIndex">End index of the array</param>
/// <returns>Returns subarray/segment</returns>

TArray<uint8> UOVRLipsyncHelpers::GetAudioSegment(const TArray<uint8> Audio, int32 StartIndex, int32 EndIndex)
{
	TArray<uint8> Segment;

	int32 totalCount = Audio.Num();

	for (int32 i = StartIndex; i < EndIndex; ++i)
	{
		if (i > 0 && i < totalCount)
		{
			Segment.Add(Audio[i]);
		}
	}

	return Segment;
}
