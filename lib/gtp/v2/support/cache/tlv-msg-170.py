ies = []
ies.append({ "ie_type" : "EBI", "ie_value" : "List of RABs", "presence" : "C", "instance" : "0", "comment" : "Shall be present on S4 interface when this message is used to release a subset of all active RABs according to the RAB release procedure.Several IEs with this type and instance values shall be included as necessary to represent a list of RABs to be released."})
ies.append({ "ie_type" : "Node Type", "ie_value" : "Originating Node", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be sent on S11 interface, if ISR is active in the MME.This IE shall be sent on S4 interface, if ISR is active in the SGSNSee NOTE 1."})
ies.append({ "ie_type" : "Indication", "ie_value" : "Indication Flags", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be included if any one of the applicable flags is set to 1.Applicable flags are:Abnormal Release of Radio Link: This flag shall be set to 1 on the S11 interface-	if the S1 release is due to an abnormal release of the radio link, e.g. when the MME receives UE CONTEXT RELEASE REQUEST with the cause value set to Radio Connection With UE Lost, or-	if the MME performs DL data buffering and the operator specified policy/configuration conditions for triggering the PGW pause of charging are met (e.g. number/fraction of packets/bytes dropped at MME in downlink) as specified in clause5.3.6A of 3GPPTS23.401[3]."})
ies.append({ "ie_type" : "Secondary RAT Usage Data Report", "ie_value" : "Secondary RAT Usage Data Report", "presence" : "CO", "instance" : "0", "comment" : "If the PLMN has configured secondary RAT usage reporting, the MME shall include this IE on the S11 interface if it has received Secondary RAT usage data from eNodeB in a Connection Suspend, or S1 release procedure.The MME shall set the IRPGW flag to 0, to indicate that the IE shall not be forwarded to the PGW.Several IEs with the same type and instance value may be included, to represent multiple usage data reports."})
ies.append({ "ie_type" : "PSCell ID", "ie_value" : "PSCell ID", "presence" : "CO", "instance" : "0", "comment" : "The MME shall include this IE on the S11 interface, if it has received this information from the eNodeB."})
msg_list[key]["ies"] = ies